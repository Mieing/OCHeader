@class NSArray;

@interface IESECECTagGroupLayoutResult : NSObject {
    struct CGSize { double width; double height; } _splitterSize;
    struct CGSize { double width; double height; } _totalSize;
    NSArray *_tagDataLayouts;
    double _actualLineHeight;
    long long _numOfCanShowTags;
    BOOL _isEstimatedResult;
}

- (void).cxx_destruct;

@end
