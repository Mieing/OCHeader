@class NSString, NSData;

@interface FBSDKGraphRequestDataAttachment : NSObject

@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *filename;

- (id)initWithData:(id)a0 filename:(id)a1 contentType:(id)a2;
- (void).cxx_destruct;

@end
