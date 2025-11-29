@class NSString;

@interface AWESideBarWalletSubtitleDisplayInfo : AWESideBarSubtitleDisplayBaseInfo

@property (readonly, copy, nonatomic) NSString *subTitleType;
@property (readonly, copy, nonatomic) NSString *subTitleExtra;

- (id)initWithSubtitle:(id)a0 subTitleType:(id)a1 subTitleExtra:(id)a2;
- (void).cxx_destruct;
- (void)consume;

@end
