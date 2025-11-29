@class NSString, AWEModernFeedSectionMeta, AWEModernFeedCellBackgroundModel, AWEModernFeedCellSeparatorModel;

@interface AWEModernFeedCellModel : NSObject

@property (copy, nonatomic) NSString *preRenderIdentifier;
@property (copy, nonatomic) NSString *cellType;
@property (retain, nonatomic) id data;
@property (readonly, nonatomic) BOOL isStaticType;
@property (nonatomic) unsigned long long themeStyle;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *bottomSeparator;
@property (retain, nonatomic) AWEModernFeedCellBackgroundModel *cellBackgroundModel;
@property (retain, nonatomic) AWEModernFeedSectionMeta *meta;
@property (retain, nonatomic) id attachmentCellModel;
@property (nonatomic) unsigned long long combinateCardType;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 data:(id)a1;

@end
