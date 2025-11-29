@class NSString, NSDictionary, NSArray, IESGCPDetailContentStyle;

@interface IESGCPDetailContentNode : NSObject

@property (retain, nonatomic) NSDictionary *originalResponse;
@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSDictionary *data;
@property (readonly, copy, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) IESGCPDetailContentStyle *style;

+ (id)contentWithDict:(id)a0;
+ (id)filterNSNullWithDict:(id)a0;

- (id)filterContentUsing:(id /* block */)a0;
- (void)updateContentData:(id)a0 value:(id)a1;
- (id)noneFloatChildren;
- (id)childrenWithFloatType:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
