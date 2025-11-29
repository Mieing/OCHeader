@class NSString, WBImageObject, WBNewVideoObject, WBWeiyouObject, WBBaseMediaObject, WBSuperGroupObject;

@interface WBMessageObject : NSObject

@property (retain, nonatomic) WBWeiyouObject *weiyouObject;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) WBImageObject *imageObject;
@property (retain, nonatomic) WBBaseMediaObject *mediaObject;
@property (retain, nonatomic) WBNewVideoObject *videoObject;
@property (retain, nonatomic) WBSuperGroupObject *superTopicObject;

+ (id)dictionaryWithMessage:(id)a0;
+ (id)messageWithDictionary:(id)a0;
+ (id)message;

- (void).cxx_destruct;
- (id)validate;

@end
