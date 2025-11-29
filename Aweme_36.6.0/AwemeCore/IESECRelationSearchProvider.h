@class NSString;

@interface IESECRelationSearchProvider : NSObject <IESECRelationSearchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchViewControllerWithContext:(id)a0 cellProvider:(id)a1;


@end
