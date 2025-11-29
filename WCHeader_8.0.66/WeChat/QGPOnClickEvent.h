@class NSArray, NSString;

@interface QGPOnClickEvent : QGPEvent

@property (retain, nonatomic) NSArray *clickedPosition;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (id)instanceWithClickedPosition:(id)a0 identifier:(id)a1 name:(id)a2;

- (void).cxx_destruct;

@end
