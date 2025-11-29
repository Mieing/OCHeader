@class NSString, NSMutableArray;

@interface TTVideoEngineSubDecInfoModel : NSObject <TTVideoEngineSubDecInfoProtocol>

@property (retain, nonatomic) NSMutableArray *subModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)subtitleCount;
- (id)initWithSubModels:(id)a0;
- (void)addSubModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonString;

@end
