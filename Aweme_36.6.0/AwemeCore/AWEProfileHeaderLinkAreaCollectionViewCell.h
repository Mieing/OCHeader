@class NSString, AWECommonLinkAreaView, AWEProfileLinkAreaView, AWEProfileHeaderContext;
@protocol AWEProfileHeaderLinkAreaCollectionViewCellDelegate;

@interface AWEProfileHeaderLinkAreaCollectionViewCell : UICollectionViewCell <AWEProfileLinkAreaViewDelegate, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWECommonLinkAreaView *commonLinkAreaView;
@property (retain, nonatomic) AWEProfileLinkAreaView *profileLinkAreaView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) id<AWEProfileHeaderLinkAreaCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
