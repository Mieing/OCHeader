@interface TextState3rdPartyUtil : NSObject

+ (id)sourceIdForType:(unsigned int)a0;
+ (Class)handlerClassForType:(unsigned int)a0;
+ (id)stringFromTextState3rdPartyDataType:(unsigned int)a0;
+ (BOOL)isSupportType:(unsigned int)a0;
+ (id)handlerFromDataItem:(id)a0 context:(id)a1;
+ (id)handlerFromSourceId:(id)a0 dataItems:(id)a1 sourceDataItems:(id)a2 context:(id)a3;
+ (id)handlerFromDataItems:(id)a0 context:(id)a1;

@end
