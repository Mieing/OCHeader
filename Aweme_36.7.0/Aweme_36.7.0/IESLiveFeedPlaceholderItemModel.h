@class Placeholder, NSString;

@interface IESLiveFeedPlaceholderItemModel : IESLiveDynamicModel <HTSLiveFeedItem, IESLiveFeedDrawerItemProtocol>

@property (retain, nonatomic) Placeholder *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
