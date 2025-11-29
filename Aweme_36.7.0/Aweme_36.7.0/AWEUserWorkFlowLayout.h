@class NSString;
@protocol AWEListKitBaseLayoutDelegate;

@interface AWEUserWorkFlowLayout : UICollectionViewFlowLayout <AWEListKitLayoutBaseProtocol>

@property (weak, nonatomic) id<AWEListKitBaseLayoutDelegate> baseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awelistkit_supplementaryKindForHeader;
- (id)awelistkit_supplementaryKindForFooter;
- (void).cxx_destruct;

@end
