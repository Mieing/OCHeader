@class NSString, NSObject;

@interface OcSeiData : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject *value;
@property (nonatomic) long long repeatTimes;
@property (nonatomic) BOOL keyFrameOnly;
@property (nonatomic) BOOL allowsCovered;
@property (nonatomic) int timeGap;
@property (nonatomic) int seiFlag;
@property (nonatomic) int seiIndex;
@property (nonatomic) int pts;

- (id)initWithConfig:(id)a0 value:(id)a1 repeatTimes:(long long)a2 keyFrameOnly:(BOOL)a3 allowsCovered:(BOOL)a4 timeGap:(int)a5 seiFlag:(int)a6;
- (id)initWithConfig:(id)a0 pts:(long long)a1 seiIndex:(long long)a2;
- (void).cxx_destruct;

@end
