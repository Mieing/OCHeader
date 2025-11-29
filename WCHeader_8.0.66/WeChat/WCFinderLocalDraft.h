@class NSString, UIImage, MJShootComposingDraft, NSData;

@interface WCFinderLocalDraft : NSObject <WCFinderDraftProtocol, WCTTableCoding>

@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *coverImageFromDisk;
@property (copy, nonatomic) NSString *draftId;
@property (nonatomic) double createTime;
@property (nonatomic) unsigned long long draftBusinessType;
@property (nonatomic) unsigned long long draftTaskState;
@property (retain, nonatomic) MJShootComposingDraft *draftComposing;
@property (nonatomic) double aigcTaskCompletionProgress;
@property (nonatomic) unsigned int estimatedAigcWaitTime;
@property (retain, nonatomic) NSData *aigcContextData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)draftId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_draftId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_createTime;
+ (const void *)draftComposing;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_draftComposing;
+ (const void *)draftBusinessType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_draftBusinessType;
+ (const void *)draftTaskState;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_draftTaskState;
+ (const void *)aigcTaskCompletionProgress;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_aigcTaskCompletionProgress;
+ (const void *)estimatedAigcWaitTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_estimatedAigcWaitTime;
+ (const void *)aigcContextData;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_aigcContextData;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (id)draftWithCover:(id)a0 draftID:(id)a1 createTime:(double)a2 draftBusinessType:(unsigned long long)a3;

@end
