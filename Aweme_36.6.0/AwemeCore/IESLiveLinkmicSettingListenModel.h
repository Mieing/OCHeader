@class NSSet;

@interface IESLiveLinkmicSettingListenModel : NSObject

@property (weak, nonatomic) id listener;
@property (nonatomic) BOOL isAllKey;
@property (retain, nonatomic) NSSet *keys;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ onceMessageBlock;

- (void).cxx_destruct;

@end
