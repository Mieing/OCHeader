@class NSString, NSMutableArray;

@interface ToygerBlob : ToygerBaseModel

@property (copy, nonatomic) NSString *blobVersion;
@property (retain, nonatomic) NSMutableArray *blobElem;

- (void).cxx_destruct;
- (id)init;

@end
