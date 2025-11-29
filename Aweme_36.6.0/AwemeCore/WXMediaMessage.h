@class NSString, NSData;

@interface WXMediaMessage : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) NSData *thumbData;
@property (copy, nonatomic) NSString *mediaTagName;
@property (copy, nonatomic) NSString *messageExt;
@property (copy, nonatomic) NSString *messageAction;
@property (retain, nonatomic) id mediaObject;
@property (copy, nonatomic) NSString *thumbDataHash;
@property (copy, nonatomic) NSString *msgSignature;

+ (id)message;

- (void)setThumbImage:(id)a0;
- (void).cxx_destruct;

@end
