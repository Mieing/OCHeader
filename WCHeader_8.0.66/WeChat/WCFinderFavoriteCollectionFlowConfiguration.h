@class NSString, WCFinderAuthInfo;

@interface WCFinderFavoriteCollectionFlowConfiguration : NSObject <UIContentConfiguration, WCFinderViewSizable, WCFinderDeleteActionExecutable>

@property (nonatomic) struct CGSize { double width; double height; } proposedSize;
@property (nonatomic) struct CGSize { double width; double height; } resolvedSize;
@property (retain, nonatomic) NSString *resolvedTitle;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long feedCount;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) WCFinderAuthInfo *authInfo;
@property (nonatomic) unsigned long long deleteMenuFlag;
@property (copy, nonatomic) id /* block */ onDeleteAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)resolvedTitleWithWidth:(double)a0;
- (id)_compositeStringWithMaxWidth:(double)a0 title:(id)a1 subtitle:(id)a2 font:(id)a3;
- (id)_calculateOptimalTitle:(id)a0 maxWidth:(double)a1 font:(id)a2;
- (void).cxx_destruct;

@end
