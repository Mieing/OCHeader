@class IESGCPExplainCardDataModel, NSString;

@interface IESGCPExplainCardUpdateAction : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) IESGCPExplainCardDataModel *explainCardModel;
@property (nonatomic) unsigned long long dismissReason;
@property (copy, nonatomic) NSString *updateData;

- (id)initWithType:(long long)a0 explainCardModel:(id)a1;
- (void).cxx_destruct;

@end
