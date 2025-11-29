@class NSNumber, NSString;

@interface IESLivePartyKTVChorusJumpParams : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *songID;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long jumpScene;
@property (nonatomic) BOOL isSoloKTV;

- (void).cxx_destruct;
- (id)init;

@end
