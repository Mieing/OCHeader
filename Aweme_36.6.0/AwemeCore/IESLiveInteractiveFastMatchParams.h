@class NSString;

@interface IESLiveInteractiveFastMatchParams : NSObject

@property (nonatomic) long long roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (nonatomic) BOOL isManual;
@property (nonatomic) BOOL reMatch;
@property (nonatomic) long long matchType;
@property (nonatomic) long long matchScene;
@property (nonatomic) int cityCode;

- (void).cxx_destruct;

@end
