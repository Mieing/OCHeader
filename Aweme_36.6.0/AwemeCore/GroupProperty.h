@class NSString, GroupProperty_Selector;

@interface GroupProperty : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long capacity;
@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *afterLiveDescLinkURL;
@property (copy, nonatomic) NSString *beforeLiveDesc;
@property (retain, nonatomic) GroupProperty_Selector *selector;
@property (nonatomic) BOOL hasSelector;

+ (id)descriptor;

@end
