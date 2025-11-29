@class YataJSONElement, YataJSONPointer;

@interface YataJSONChangeOperation : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) YataJSONPointer *path;
@property (retain, nonatomic) YataJSONPointer *from;
@property (retain, nonatomic) YataJSONElement *value;
@property (retain, nonatomic) YataJSONElement *oldValue;

- (void).cxx_destruct;

@end
