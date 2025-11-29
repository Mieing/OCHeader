@class NSString;

@interface RelaxFramework.ListWrapperScrollPosParam : NSObject {
    void /* function */ align;
    void /* function */ id;
}

@property (nonatomic) BOOL smooth;
@property (nonatomic) int position;
@property (nonatomic) double offset;
@property (nonatomic, copy) NSString *align;
@property (nonatomic, copy) NSString *id;

- (id)initWithSmooth:(BOOL)a0 position:(int)a1 offset:(double)a2 align:(id)a3 id:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
