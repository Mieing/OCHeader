@class NSArray, NSMutableDictionary, NSMapTable, NSString;

@interface AWEElementRegistrationForm : NSObject <AWEElementRegistrationFormProtocol>

@property (retain, nonatomic) NSMutableDictionary *elementMaps;
@property (retain, nonatomic) NSArray *allElementIDs;
@property (retain, nonatomic) NSMapTable *clazz2ElementMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultForm;

- (void)registElement:(id /* block */)a0;
- (id)elementInfoWithID:(id)a0;
- (void)registWithElementInfo:(id)a0;
- (id)elementInfoWithElementClass:(Class)a0;
- (id)getAllElementIDs;
- (void).cxx_destruct;

@end
