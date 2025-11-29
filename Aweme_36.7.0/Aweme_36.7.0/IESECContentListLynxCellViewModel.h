@class NSString, NSDictionary, UIColor;

@interface IESECContentListLynxCellViewModel : NSObject <IESECContentListCellViewModelProtocol>

@property (copy, nonatomic) NSString *dynamicUrl;
@property (copy, nonatomic) NSDictionary *bizExtendParam;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) UIColor *defaultBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellContentSize;
- (id)configureCellWithTableView:(id)a0;
- (id)initWithUrl:(id)a0 bizParams:(id)a1 rawData:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)cellType;

@end
