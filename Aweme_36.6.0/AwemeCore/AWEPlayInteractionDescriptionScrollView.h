@class NSString, NSHashTable;

@interface AWEPlayInteractionDescriptionScrollView : UIScrollView <AWEPlayInteractionDescriptionScrollViewProtocol>

@property (retain, nonatomic) NSHashTable *delegateSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
