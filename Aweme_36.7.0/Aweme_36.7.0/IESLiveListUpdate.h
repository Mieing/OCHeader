@interface IESLiveListUpdate : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL isItemUpdate;
@property (nonatomic) BOOL isSectionUpdate;

- (void).cxx_destruct;

@end
