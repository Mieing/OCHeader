@class NSDictionary, IESECListKitItemDataModel, NSString;
@protocol IESECListKitCellControllerProtocol, IESECListKitCellModelDelegate;

@interface IESECListKitNativeCellModel : NSObject <IESECListKitCellModelProtocol>

@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) BOOL hasAutoPlayed;
@property (weak, nonatomic) id<IESECListKitCellModelDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) BOOL isFirstShow;
@property (readonly, nonatomic) id<IESECListKitCellControllerProtocol> cellController;
@property (readonly, nonatomic) unsigned long long engineType;
@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBFFItemData:(id)a0 itemConfig:(id)a1 cellWidth:(double)a2 context:(id)a3;
- (void)updateItemData:(id)a0;
- (BOOL)cellModelHasAutoPlayed;
- (void)setCellModelAutoPlayed:(BOOL)a0;
- (void).cxx_destruct;

@end
