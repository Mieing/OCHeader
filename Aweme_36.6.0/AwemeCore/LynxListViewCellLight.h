@class NSString, UIView;

@interface LynxListViewCellLight : UIView <LynxListCell>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) long long updateToPath;
@property (retain, nonatomic) NSString *itemKey;
@property (nonatomic) BOOL removed;
@property (nonatomic) long long columnIndex;
@property (nonatomic) long long layoutType;
@property (nonatomic) BOOL isInStickyStatus;
@property (nonatomic) double stickyPosition;
@property (nonatomic) long long operationID;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLayoutModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
