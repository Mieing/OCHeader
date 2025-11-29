@class NSString;

@interface GWImageCardCellView : GWHostBaseView

@property (copy, nonatomic) NSString *coverImgUrl;
@property (nonatomic) BOOL hidePlayBtn;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hideDesc;

- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
