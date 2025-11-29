@class NSString, NSNumber, NSArray;

@interface ToygerBlobElem : ToygerBaseModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subType;
@property (retain, nonatomic) NSNumber *idx;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *optionalContent;
@property (retain, nonatomic) NSArray *faceInfos;
@property (retain, nonatomic) NSArray *capture;

+ (id)blobElemFrom:(id)a0 type:(id)a1 subType:(id)a2 idx:(id)a3 faceInfo:(id)a4;

- (void).cxx_destruct;
- (id)init;

@end
