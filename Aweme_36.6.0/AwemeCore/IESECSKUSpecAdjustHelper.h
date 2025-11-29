@interface IESECSKUSpecAdjustHelper : NSObject

+ (id)curSelectedSKUIDFromSpecs:(id)a0 states:(id)a1;
+ (id)specItemCanSelectMapFromSpecs:(id)a0 specsState:(id)a1 globalVO:(id)a2;
+ (id)specDescriptionFromSpecs:(id)a0 specsState:(id)a1 layoutOptimize:(BOOL)a2;
+ (id)picSpecItemIDFromSpecs:(id)a0 specsState:(id)a1;
+ (id)selectedSpecItemHeadImgStrFromSpecs:(id)a0 specsState:(id)a1 defaultImgStr:(id)a2;
+ (id)firstNormalSKUSpecIDsStrFromSpecsNodeFields:(id)a0 globalData:(id)a1;

@end
