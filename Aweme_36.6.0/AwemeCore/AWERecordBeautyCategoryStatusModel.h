@class NSString, AWERecordBeautyCategoryModel;

@interface AWERecordBeautyCategoryStatusModel : NSObject <CKScorageBizModel, CKScorageBindable>

@property (weak, nonatomic) AWERecordBeautyCategoryModel *bindTo;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
