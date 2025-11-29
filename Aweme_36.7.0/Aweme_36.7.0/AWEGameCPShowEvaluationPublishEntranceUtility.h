@class NSString;

@interface AWEGameCPShowEvaluationPublishEntranceUtility : NSObject <AWEGameCPEvaluationPublishInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)util;

- (BOOL)isHomepageFamiliar:(id)a0;
- (BOOL)isHomePageFollow:(id)a0;
- (BOOL)isPersonalHomepage:(id)a0;
- (BOOL)hitFrequency:(id)a0 andAwemeModel:(id)a1;
- (BOOL)hitClose:(id)a0;
- (BOOL)hitEvaluationPublished:(id)a0;
- (BOOL)hitHomePageFrequency:(id)a0;
- (BOOL)hitGameFrequency:(id)a0;
- (BOOL)hitVideoFrequency:(id)a0 andAwemeModel:(id)a1;
- (BOOL)shouldShowCardViewWithAwemeModel:(id)a0 referString:(id)a1;

@end
