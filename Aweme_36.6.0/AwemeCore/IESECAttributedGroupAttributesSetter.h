@class NSDictionary, NSMutableDictionary;

@interface IESECAttributedGroupAttributesSetter : NSObject

@property (retain, nonatomic) NSMutableDictionary *attrs;
@property (readonly, copy, nonatomic) id /* block */ setAttribute;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;

@end
