@class NSString, NSArray, AWEURLModel;

@interface AWESearchTextExtractionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *urlListModel;
@property (copy, nonatomic) NSArray *uRLListArray;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) long long identi;
@property (copy, nonatomic) NSString *textIdentifer;
@property (nonatomic) BOOL isSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uRLListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getTitleLabelAttriStringIsSelect:(BOOL)a0;
- (double)heightForRowWithWidth:(double)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;

@end
