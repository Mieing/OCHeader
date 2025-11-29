@class NSString;

@interface AWEReflowVideoInsertHelper : NSObject <AWEReflowVideoInsert>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackVideoInsertIfNeeded:(id)a0 response:(id)a1 extraInfo:(id)a2;
+ (id)buildParams:(long long)a0 shareTargetType:(unsigned long long)a1;
+ (void)clickShareReflowAlert:(id)a0 shareTargetType:(unsigned long long)a1 tokenFromType:(long long)a2;
+ (BOOL)shouldInsertReflowVideoToFeed;


@end
