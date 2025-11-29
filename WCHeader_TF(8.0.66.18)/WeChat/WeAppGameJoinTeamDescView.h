@class MMUILabel;

@interface WeAppGameJoinTeamDescView : UIView

@property (retain, nonatomic) MMUILabel *scoreLable;
@property (retain, nonatomic) MMUILabel *additionLabel;
@property (retain, nonatomic) MMUILabel *memberLabel;

- (id)initWithParmas:(id)a0;
- (void)initUI:(id)a0;
- (void)layoutUI;
- (id)getTitle;
- (id)getTeamupDesc;
- (id)getMemberDesc;
- (void).cxx_destruct;

@end
