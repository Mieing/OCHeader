@class NSString;

@interface MJVocalEnhancementQueueItem : NSObject

@property (readonly, nonatomic) NSString *audioID;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) id /* block */ completionHandler;

+ (id)vocalEnhancementItemWithAudioID:(id)a0 roleID:(id)a1 completionHandler:(id /* block */)a2;

- (id)initWithAudioID:(id)a0 roleID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
