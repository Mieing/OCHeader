@class NSArray, NSMutableDictionary, NSString;

@interface IESLatchPageListTemplate : NSObject <IESPrefetchConfigTemplate>

@property (retain, nonatomic) NSMutableDictionary *pages;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPageNode:(id)a0;
- (unsigned long long)countOfPages;
- (id)pageForName:(id)a0;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
