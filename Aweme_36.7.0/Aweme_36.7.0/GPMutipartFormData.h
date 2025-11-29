@class NSData, NSString;

@interface GPMutipartFormData : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;

- (id)initWithData:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (void).cxx_destruct;

@end
