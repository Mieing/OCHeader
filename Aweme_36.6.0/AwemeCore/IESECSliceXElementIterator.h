@class NSString;

@interface IESECSliceXElementIterator : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) NSString *start;
@property (retain, nonatomic) NSString *end;
@property (retain, nonatomic) NSString *items;
@property (retain, nonatomic) NSString *item;
@property (retain, nonatomic) NSString *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;

- (id)getIteratorWithData:(id)a0;
- (id)getResult:(id)a0 data:(id)a1 resultClass:(Class)a2;
- (void).cxx_destruct;

@end
