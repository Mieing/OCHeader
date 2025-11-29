@interface AWESearchCardCoverBackgroundConfig : NSObject

+ (id)colorWithRGBString:(id)a0 defaultColor:(id)a1;
+ (BOOL)enableUseCardCoverColorFromServerWithModel:(id)a0;
+ (BOOL)enableUseCardCoverColorFromConfig;
+ (id)cardCoverColorOfServer:(id)a0;
+ (id)cardCoverColorOfConfig;

@end
