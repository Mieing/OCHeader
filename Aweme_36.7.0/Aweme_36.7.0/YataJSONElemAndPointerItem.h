@class YataJSONElement, YataJSONPointer;

@interface YataJSONElemAndPointerItem : NSObject

@property (retain, nonatomic) YataJSONPointer *pointer;
@property (retain, nonatomic) YataJSONElement *element;

- (id)initWithPointer:(id)a0 element:(id)a1;
- (void).cxx_destruct;

@end
