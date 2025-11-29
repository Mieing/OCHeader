@interface AWEHPSkylightFactory : NSObject

+ (id)homepageSkylightWithAccessKey:(id)a0 withUndertakeHost:(id)a1 withCommunicationObject:(id)a2 withHostIdentifier:(id)a3;
+ (void)p_trackSkylightCreate:(BOOL)a0 withErrorMessage:(id)a1 withAccessApproachIdentifier:(id)a2 withUndertakeHostIdentifier:(id)a3;
+ (BOOL)p_filterBlackListIfNeed:(id)a0;
+ (id)registerAccessTypeAndClassDictionary;

@end
