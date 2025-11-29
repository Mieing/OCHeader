@class NSString;

@interface TencentMessageParse : NSObject <NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getReqFromUrl:(id)a0;
+ (id)getRespFromUrl:(id)a0;
+ (id)parseTencentMessage:(id)a0;

- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;

@end
