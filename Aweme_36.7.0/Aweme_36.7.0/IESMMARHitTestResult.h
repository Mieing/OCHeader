@class ARHitTestResult, IESMMARAnchor;

@interface IESMMARHitTestResult : NSObject

@property (retain, nonatomic) ARHitTestResult *innerResult;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } localTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } worldTransform;
@property (readonly, nonatomic) IESMMARAnchor *anchor;

+ (unsigned long long)iesTypeFor:(unsigned long long)a0;
+ (unsigned long long)arTypeFor:(unsigned long long)a0;

- (id)initWithARHitTestResult:(id)a0;
- (void).cxx_destruct;

@end
