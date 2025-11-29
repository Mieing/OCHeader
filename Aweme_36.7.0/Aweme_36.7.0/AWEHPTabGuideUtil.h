@class NSString;

@interface AWEHPTabGuideUtil : NSObject <AWEHPTabGuideUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPizzaVerifyWithComponentID:(id)a0 completion:(id /* block */)a1;
+ (id)getHPTabGuideButtonInfoWithAwemeModel:(id)a0 tabID:(id)a1;
+ (id)generateButtonComponentInfoWithButtonModel:(id)a0;
+ (BOOL)isTabCurrentExit:(id)a0;
+ (BOOL)isTabCanLanding:(id)a0;
+ (id)generateLabelComponentInfoWithLabelModel:(id)a0;
+ (id)getTabCurrentTitle:(id)a0;
+ (id)filterHPTabGuideLabelModelListWithAwemeModel:(id)a0;
+ (id)filterHPTabGuideButtonModelListWithAwemeModel:(id)a0;
+ (id)findHPTabGuideLabelModelWithAwemeModel:(id)a0 tabID:(id)a1;
+ (id)findHPTabGuideButtonModelWithAwemeModel:(id)a0 tabID:(id)a1;
+ (id)getHPTabGuideLabelInfoWithAwemeModel:(id)a0 tabID:(id)a1;


@end
