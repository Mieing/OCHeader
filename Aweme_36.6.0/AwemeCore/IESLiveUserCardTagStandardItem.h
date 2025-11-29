@class NSString, UIView, IESLiveUserCardStore, IESLiveProfileTagContent;

@interface IESLiveUserCardTagStandardItem : NSObject <IESLiveUserCardTagProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveProfileTagContent *tagContent;
@property (nonatomic) long long tagType;
@property (retain, nonatomic) UIView *itemView;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackClickWithDict:(id)a0;
- (void)trackShowWithDict:(id)a0;
- (void)initItemView:(id)a0;
- (id)initWithTagContent:(id)a0 withUsercardStore:(id)a1;
- (void)assembleWithUserProfile:(id)a0;
- (void)itemViewShow:(id)a0;
- (void)itemViewClick:(id)a0;
- (void).cxx_destruct;

@end
