@class AWECoOperationInfoModel, NSArray, NSString;

@interface AWECoCreatorMultiDetailCellModel : NSObject <AWECoCreatorCellProtocol>

@property (retain, nonatomic) AWECoOperationInfoModel *coOperationModel;
@property (nonatomic) BOOL isSignificant;
@property (retain, nonatomic) NSArray *coCreatorList;
@property (nonatomic) long long firstIndex;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)cellHeight;

@end
