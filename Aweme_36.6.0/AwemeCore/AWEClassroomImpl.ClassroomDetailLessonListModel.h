@class NSArray, NSString, _TtC17AWEClassroomModel20ClassroomCursorModel;

@interface AWEClassroomImpl.ClassroomDetailLessonListModel : MTLModel <MTLJSONSerializing> {
    void /* function */ data;
    void /* function */ snapshotId;
}

@property (nonatomic, copy) NSArray *data;
@property (nonatomic, copy) NSString *snapshotId;
@property (nonatomic, retain) _TtC17AWEClassroomModel20ClassroomCursorModel *nextCursor;
@property (nonatomic, retain) _TtC17AWEClassroomModel20ClassroomCursorModel *prevCursor;

+ (id)nextCursorJSONTransformer;
+ (id)prevCursorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
