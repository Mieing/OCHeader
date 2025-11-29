@class NSNumber, NSString;

@interface AWEAILoraProfileFullConfigurationImpl : NSObject <AWEAILoraProfileConfiguration>

@property (nonatomic) BOOL needHideCell;
@property (copy, nonatomic) NSNumber *canShowCell;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedHideCell;
- (void)setDetailHeaderKeywords:(id)a0;
- (id)detailHeaderKeywords;
- (void)p_configureDataForCell:(id)a0;
- (void)p_configureLayoutForCell:(id)a0;
- (void).cxx_destruct;
- (void)configureView:(id)a0;
- (double)sizeHeight;

@end
