@class NSString, NSData;

@interface WXMediaMessage : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) NSString *messageAction;
@property (retain, nonatomic) id mediaObject;
@property (copy, nonatomic) NSString *thumbDataHash;
@property (copy, nonatomic) NSString *msgSignature;

+ (id)message;

- (id)init;
- (void)setThumbImage:(id)a0;
- (void).cxx_destruct;

@end
