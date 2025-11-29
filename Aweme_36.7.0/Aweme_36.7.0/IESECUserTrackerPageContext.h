@class NSString, NSDictionary, UIView;

@interface IESECUserTrackerPageContext : NSObject <NSCopying>

@property (retain, nonatomic) NSString *pageID;
@property (weak, nonatomic) UIView *container;
@property (nonatomic) BOOL canShowPendant;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pendantEdgeInsets;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
