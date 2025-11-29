@interface AWELiveShelfCommonUtil : NSObject

+ (id)shelfShowErrorMsgWithType:(unsigned long long)a0;
+ (id)netErrorMsgWithCode:(id)a0;
+ (double)shelfHeightPercentage;
+ (double)shelfFullHeightPercentage;
+ (id)webviewSchemaString:(id)a0 joinParameters:(id)a1;
+ (id)webviewUrlString:(id)a0 joinParameters:(id)a1;
+ (double)iPadShelfHeight;
+ (id)updateMPSchemaListWithCardList:(id)a0 mpParam:(id)a1;
+ (void)updateCardItem:(id)a0 withGaiaXData:(id)a1;
+ (double)getLiveShelfSafeAreaBottom;
+ (long long)shelfExtensionHeight;
+ (id)lynxSchema:(id)a0 joinParameters:(id)a1;
+ (void)transferToURLString:(id)a0 parameter:(id)a1;
+ (void)preloadMPSchemaListWithCardList:(id)a0 trackerParameter:(id)a1;
+ (id)getUpdateIndexesWithCardList:(id)a0 updatedCardData:(id)a1;
+ (id)getColorWithString:(id)a0 defaultColor:(id)a1;

@end
