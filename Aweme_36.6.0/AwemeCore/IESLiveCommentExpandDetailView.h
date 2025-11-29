@class NSString;

@interface IESLiveCommentExpandDetailView : UIView <IESLiveCommentExpandDetailViewProtocol>

@property (readonly, nonatomic) unsigned long long currentActionType;
@property (nonatomic) unsigned long long detailAreaType;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ areaTypeTempChange;
@property (copy, nonatomic) id /* block */ willOutput;
@property (copy, nonatomic) id /* block */ didOutput;
@property (copy, nonatomic) id /* block */ willSend;
@property (copy, nonatomic) id /* block */ didDelete;
@property (copy, nonatomic) id /* block */ finishComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
