@interface AWEClassroomImpl.ClassroomDetailLessonListNetworkProvider : AWEDataLayerMantleGetMethodNetworkProvider {
    void /* unknown type, empty encoding */ courseId;
    void /* unknown type, empty encoding */ filterType;
    void /* unknown type, empty encoding */ snapshotId;
    void /* unknown type, empty encoding */ anchorType;
    void /* unknown type, empty encoding */ anchorId;
    void /* unknown type, empty encoding */ anchorPosition;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ count;
}

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
