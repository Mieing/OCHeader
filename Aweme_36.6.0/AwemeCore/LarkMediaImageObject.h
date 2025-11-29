@class NSData, NSString;

@interface LarkMediaImageObject : LarkMediaBaseObject

@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageURL;

- (id)dataDict;
- (BOOL)valid;
- (void).cxx_destruct;

@end
