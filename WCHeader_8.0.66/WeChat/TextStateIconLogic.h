@class TextStateExperimentTable, WCCgiBlockHelper, TextStatePassthroughIconList, TextStateIconStorage, NSObject;
@protocol OS_dispatch_queue;

@interface TextStateIconLogic : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (retain, nonatomic) TextStateIconStorage *iconStorage;
@property (retain, nonatomic) TextStateIconStorage *emojiIconStorage;
@property (copy, nonatomic) id /* block */ iconUpdateHandler;
@property (retain, nonatomic) TextStatePassthroughIconList *passthroughIconList;
@property (retain, nonatomic) TextStateExperimentTable *experimentTable;
@property (copy, nonatomic) id /* block */ experimentUpdateHandler;

- (id)init;
- (void)checkAndUpdateIcon;
- (void)forceUpdateIconWithFlags:(unsigned int)a0;
- (void)privateUpdateIconWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (unsigned long long)minIntervalBetweenIconUpdate;
- (unsigned long long)mainResourceShowIconMaxCount;
- (id)activePassthroughIcon;
- (id)privateActivePassthroughIcon;
- (id)expiredPassthroughIconIdentifier;
- (void)expirePassthroughIcon;
- (void).cxx_destruct;

@end
